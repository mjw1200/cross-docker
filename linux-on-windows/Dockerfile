FROM ubuntu:latest

WORKDIR /usr/bin/counter
COPY . .

# This tells the program to stop after counting to five (five seconds). This can be overridden
# on the command line with "docker run --env stop_at=10 abadb7c04da"
ENV stop_at 5

# RUN is an image build command. Anything done with a RUN command gets layered into the image.
# apt-get update is required for the install command to work, and that's required for the make
# command to work. For some reason, the image has no fucking clue what "sudo" is.
RUN apt-get update 
RUN apt-get --yes install build-essential
RUN make counter

# CMD is a run-time command. You only get one of these; if you try to put more, only the last
# one actually runs. The leading dot seems to be necessary to run the container, otherwise you
# get "permission denied". The output comes out all-at-once when the program ends instead of
# appearing each second. I'm not sure why this is.
CMD ./counter ${stop_at}
