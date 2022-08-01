#!/bin/bash

docker run -dt -p 80:81 --name $2 -v $(pwd)/server/nginx/nginx.conf:/etc/nginx/nginx.conf $1
