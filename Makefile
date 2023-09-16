push: commit
	git push
commit: add
	git commit -m "$(M)"
add:
	git add .
pull: fetch
	git pull
fetch:
	git fetch
