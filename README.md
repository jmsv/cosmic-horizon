## Dependencies

To install all dependencies (on ubuntu), run `sudo ./get_dependencies.sh` from the root directory of this repository

1. SQLite: `sudo apt-get install sqlite3 libsqlite3-dev`

## Helpful git stuff

In Codio, before running any git commands, type `cd cosmic-horizon/` to change directory to the repository directory, otherwise you'll get a '`fatal: Not a git repository`' message.

- `git status` - shows local changes, what files are tracked
- `git add -A` - adds all new local changes
- `git commit -a -m "Short description"` - wraps changes in a commit (`-a` means all changes, `-m ""` is the commit message)
- `git push origin master` - pushes local commits to github
- `git pull origin master` - pulls from github repository
- `git reset --hard` - reset local repository to HEAD version

To add your changes to the GitHub repo, use the above `add`, `commit` and `push` commands. Get the latest changes using `pull`.

## Print colour scheme (see `print.cpp`)

- **green**: good stuff
- **red**: bad stuff
- **cyan**: titles
- **magenta**: neutral story text
- **blue**: ask for user input

## Database methods

```c++
Database db = Database();

// How to add item to inventory:
db.add_to_inventory("Potato");

// How to check if inventory contains something:
if (db.do_i_have("Potato")) {
    print("You have a Potato.");
} else {
    print("You do not have a Potato.");
}
// In this case, 'You have a Potato.' is printed.
```
