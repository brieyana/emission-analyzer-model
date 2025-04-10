#!/bin/bash

socat TCP-LISTEN:9000,fork EXEC:./prediction_wrapper.sh