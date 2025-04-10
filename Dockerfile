FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    socat \
    lsb-release \
    wget \
    git 

# install latest version of cmake
RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc | gpg --dearmor -o /usr/share/keyrings/kitware-archive-keyring.gpg && \
    echo "deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ $(lsb_release -cs) main" | \
    tee /etc/apt/sources.list.d/kitware.list && \
    apt-get update && apt-get install -y cmake

WORKDIR /app
COPY . .

RUN cmake . && cmake --build .
RUN chmod +x ./predict_emissions

COPY prediction_wrapper.sh .
COPY server.sh .

RUN chmod +x prediction_wrapper.sh server.sh

EXPOSE 9000

CMD ["./server.sh"]

