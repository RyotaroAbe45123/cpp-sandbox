FROM ubuntu:20.04

RUN apt update && apt install -y \
    g++ \
    build-essential

WORKDIR /workspace