### Modify PS  

* Download source package  
> apt-get source procps  

* Modify ps/output.c  

* Create debian patch  
> dpkg-source --commit  

* For create new package  
> dpkg-buildpackage -D -us -uc

![rezult](https://github.com/vsergeenko/po20151110svn/tree/lab5/screenshot1.jpg)

