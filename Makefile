run:
	qemu-system-i386 -m 8 -hda win101hd.img -boot order=c

push:
	git add .
	git commit -m "Win 1.01"
	git push origin main --force

