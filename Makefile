
.PHONY: build run stop clean

all: build
	$(MAKE) run

build:
	docker compose build

run:
	docker compose run minishell

stop:
	docker compose down

clean:
	docker compose down --rmi all --volumes --remove-orphans
