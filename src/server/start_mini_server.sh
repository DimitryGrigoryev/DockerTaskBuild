#!/bin/bash

gcc mini_server.c -lfcgi -o mini_server
spawn-fcgi -p8080 ./mini_server
service nginx start

/bin/bash
