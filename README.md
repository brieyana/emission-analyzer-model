# Emission Analyzer Model

This repository contains the core modeling workflow used to analyze and predict aircraft engine emissions, 
including NOx and CO₂ output. Built in MATLAB, this system leverages Excel datasets, fine-tunes them through 
statistical and machine learning techniques, and generates optimized C code for integration into the 
frontend application.

**App frontend repository**: [emission-analyzer-app](https://github.com/brieyana/emission-analyzer-app)

## Overview
1. **Data Preprocessing** – Imported and cleaned emissions data from an emission excel dataset.
2. **Model Development** – Fine-tuned predictive models using MATLAB we had out best validation accuracy using the Bagged Trees model.
3. **Code Generation** – Used MATLAB Coder to export C code for the trained model.
4. **Output Formatting** – Running the generated code will produce JSON-formatted results to be used in the application.

