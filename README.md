# node-cascon

This project contains the hands-on components of the **Node.js Native Modules** workshop at [CASCON 2017](https://www-01.ibm.com/ibm/cas/cascon/workshop.jsp).  The abstract of the workshop is presnted here:

>Node.js is growing in popularity and it is becoming highly likely that you will need to develop Node.js based applications as part of your future solutions. Node.js is lightweight and efficient with an event-driven and non-blocking I/O model, making it a good framework for Microservice architecture. Combining Node.js with Microservice architecture, developers can easily work on individual functional components without affecting the availability and performance of the entire application. Another striking benefit is Node.js' package ecosystem, NPM, is the largest ecosystem of open source libraries in the world, allowing developers to reuse existing modules and libraries into their own solutions.

> While most code used with Node.js is written in Javascript, it is sometimes necessary to develop native add-ons in C/C++. These add-ons allow Node.js code to interact with existing libraries written in C/C++ or to interact with their environment in ways that the existing Node.js JavaScript API does not support. This workshop is to help you get started in exploiting the benefits of Node.js by teaching you how to fully leverage the power of Node.js native add-ons.

The project includes several examples of building native add-ons, ranging from simple *hello-world* and *callback* scenarios to apps leveraging *[nanomsg](https://www.npmjs.com/package/nanomsg)* and *[pwuid](https://www.npmjs.com/package/pwuid)*.  Each example can be found in its respective subdirectory.  Within each, you will find templates of the files and components to successfully build the native add-ons, leveraging the basic add-on facilities in Node.js core, *[Native Abstraction for Node.js - NAN](https://github.com/nodejs/nan)*, and *[Native API - N-API](https://nodejs.org/api/n-api.html)*.  

Solutions for all the examples can be found in the *[solution](https://github.com/anisha-rohra/node-cascon/tree/solution)* branch

# Getting Started

To work with the examples in this project, you will require the following software elements:
* Node 8
* npm
* python 2.7.x
* gcc 4.8 or newer
* git

Alternatively, if you have [Docker](https://docs.docker.com/engine/installation/) on your system, you can build a container from the *[Dockerfile](https://raw.githubusercontent.com/anisha-rohra/node-cascon/master/Dockerfile)* included at the root of this project.

Save the [Dockerfile]([Dockerfile](https://raw.githubusercontent.com/anisha-rohra/node-cascon/master/Dockerfile)) on your system.
```bash
   docker build -t node-cascon .
   docker run -it node-cascon
```

One important caveat if you are building using the docker container is that for `npm install` steps, you need to specify `--unsafe-perm` option in order to allow root to install the npm modules.  Otherwise, you will get an error like: `npm WARN lifecycle ... install: cannot run in wd %s %s (wd=%s) `, and the `npm install` will fail.
