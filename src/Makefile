all: docker_manual
OS := $(shell uname )
PATH_PROG := $(shell pwd)

docker_part_4:
	docker build -f ./part_4/Dockerfile_4 -t mini_server:part4 .
	chmod +x ./part_4/docker_run.sh
	./part_4/docker_run.sh mini_server:part4 miniserver4
	docker images
	docker ps -a

save_image_4:
	docker export -o image_part_4.tar miniserver4 | gzip > image_part_4.tar

docker_part_4_del:
	docker stop miniserver4
	docker rm miniserver4
	docker rmi -f mini_server:part4

docker_part_5:
	export DOCKER_CONTENT_TRUST=1
	docker build -f ./part_5/Dockerfile_5 -t mini_server:part5 .
	chmod +x ./part_5/docker_run.sh
	./part_5/docker_run.sh mini_server:part5 miniserver5
ifeq ($(OS), Darwin)
	brew install goodwithtech/r/dockle
else
	#Ubuntu
	chmod +x ./part_5/dockle_install.sh
	sh ./part_5/dockle_install.sh
endif
	dockle mini_server:part5
	docker images
	docker ps -a

save_image_5:
	docker export -o image_part_5.tar miniserver5 | gzip > image_part_5.tar

docker_part_5_del:
	docker stop miniserver5
	docker rm miniserver5
	docker rmi -f mini_server:part5

compose:
	docker-compose build
	docker-compose up

compose_del:
	docker-compose down
	docker rmi -f src_mini_server -f nginx
