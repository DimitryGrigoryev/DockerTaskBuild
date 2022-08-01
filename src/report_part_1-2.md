# DO5_SimpleDocker

## Part 1. Готовый докер

- Взять официальный докер образ с **nginx** и выкачать его при помощи `docker pull`  Проверить наличие докер образа через `docker images`
  - ![Part_1.1](../misc/images_report/part_1.1.png)

- Запустить докер образ через `docker run -d [image_id|repository]` Проверить, что образ запустился через `docker ps`
  - ![Part_1.2](../misc/images_report/part_1.2.png)

- Посмотреть информацию о контейнере через `docker inspect [container_id|container_name]` По выводу команды определить и поместить в отчёт размер контейнера, список замапленных портов и ip контейнера

  - ![Part_1.3](../misc/images_report/part_1.3.png)

- Остановить докер образ через `docker stop [container_id|container_name]` Проверить, что образ остановился через `docker ps`
  - ![Part_1.4](../misc/images_report/part_1.4.png)

- Запустить докер с замапленными портами 80 и 443 на локальную машину через команду *run*

  - ![Part_1.5](../misc/images_report/part_1.5.png)

- Проверить, что в браузере по адресу *localhost:80* доступна стартовая страница **nginx**

  - ![Part_1.6](../misc/images_report/part_1.6.png)

- Перезапустить докер контейнер через `docker restart [container_id|container_name]` Проверить любым способом, что контейнер запустился

  - ![Part_1.7](../misc/images_report/part_1.7.png)

## Part 2. Операции с контейнером

- Прочитать конфигурационный файл *nginx.conf* внутри докер образа через команду *exec*

  - ![Part_2.1](../misc/images_report/part_2.1.png)

- Создать на локальной машине файл *nginx.conf*.  Настроить в нем по пути */status* отдачу страницы статуса сервера **nginx**
  - ![Part_2.2](../misc/images_report/part_2.2.png)

- Скопировать созданный файл *nginx.conf* внутрь докер образа через команду `docker cp` Перезапустить **nginx** внутри докер образа через команду *exec*
  - ![Part_2.3](../misc/images_report/part_2.3.png)

- Проверить, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**
  - ![Part_2.4](../misc/images_report/part_2.4.png)

- Экспортировать контейнер в файл *container.tar* через команду *export*.
 Остановить контейнер.
 Удалить образ через `docker rmi [image_id|repository]`, не удаляя перед этим контейнеры
  - ![Part_2.5](../misc/images_report/part_2.5.png)

- Импортировать контейнер обратно через команду *import* Запустить импортированный контейнер
  - ![Part_2.6](../misc/images_report/part_2.6.png)
