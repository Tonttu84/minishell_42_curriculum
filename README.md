# minishell_42_curriculum

minishell (42 curriculum)

A small UNIX shell written in C as part of the 42 curriculum. It implements a subset of bash features, including parsing, environment variables, pipes, redirections, builtins, and signal handling. The project focuses on process control, file descriptors, memory management, and building a robust command interpreter from scratch. Large benefit to writing a shell is that you learn how to use a linux shell by writing it.

Running the Shell (Docker)

This repository includes a Docker setup so the shell runs on Linux, macOS, and Windows (WSL2) without installing readline or compiler toolchains.

Clone the repository:
git clone https://github.com/Tonttu84/minishell_42_curriculum.git 
cd minishell_42_curriculum

Build and launch minishell:
make

This command builds the Docker image, compiles minishell inside the container, and launches the shell automatically. You will be dropped directly into your custom minishell prompt.

Stop the container:
make stop

Clean everything:
make clean

Features

Command parsing with quoting and tokenization

Environment variable expansion ($VAR)

Pipes (cmd1 | cmd2)

Redirections and Heredoc (> >> < <<)

Builtins: echo, cd, pwd, export, unset, env, exit

Signal handling (Ctrl+C, Ctrl+D, Ctrl+\\)

Readline integration for history and editing

License

Part of the 42 school curriculum. Provided for educational purposes.