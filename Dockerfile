FROM gcc:latest
WORKDIR /firstTask
COPY Shebo.cpp .
RUN g++ -o task Shebo.cpp
CMD ["./task"]