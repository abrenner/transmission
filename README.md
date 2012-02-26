transmission
============

A fork of the [transmission project](http://www.transmissionbt.com/ "Transmission Project") with a few features I added. Take it or leave it. If you have anything useful, let me know!

Base Build
----------
2.50

Added Features
--------------
* Multi Watch/Download Directory
** - Allows you to specify multiple watch and download directories for transmission to use. You specific the suffix of the folder, and anything that matches that suffix will be considered a watch and download directory. Use the following sytnax in your settings.json file:

	"watch-dir": "/some/path/auto/", 
    "watch-dir-enabled": true, 
    "watch-dir-suffix-enabled": true

Bugs
----
See GitHub Issues

Contacts
--------
This forked project is maintained by Adam Brenner _<aebrenne@uci.edu>_