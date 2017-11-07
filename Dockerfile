FROM ibmcom/ibmnode

RUN apt-get install -y vim
RUN git clone https://github.com/anisha-rohra/node-cascon

WORKDIR /node-cascon

