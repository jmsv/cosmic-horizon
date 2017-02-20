## Dependencies

To install all dependencies (on ubuntu), run `sudo ./get_dependencies.sh` from the root directory of this repository

1. SQLite: `sudo apt-get install sqlite3 libsqlite3-dev`

## Helpful git stuff

- `git status` - shows local changes, what files are tracked
- `git add -A` - adds all new local changes
- `git commit -a -m "Short description"` - wraps changes in a commit (`-a` means all changes, `-m ""` is the commit message)
- `git push origin master` - pushes local commits to github
- `git pull origin master` - pulls from github repository
- `git reset --hard` - reset local repository to HEAD version

To add your changes to the GitHub repo, use the above `add`, `commit` and `push` commands. Get the latest changes using `pull`.
