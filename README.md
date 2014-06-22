peerfile
========

Library to get a file from a set of peers

Features/Ideas
Client:
  - Give client a list of peers
    - Client checks if peers exists and ask if they have the file (by name and/or hash)
    - From the list of peers with the file, get chunks sequentially while slowly building it up
  - Give client a filename and place to put the file in when complete, also a temp directory

Server (Client Listener):
  - Provide a callback to code that can verify if the client has the file and give the path to the file
    - This allows the user to look up the file in a database or filesystem
  - Provide callback for getting the file (incase file is stored in database), returns pointer to memory mapped file?
  - Send requested chunks back to the client.

Overall:
  - Provide simple hash functions and prehaps another callback for users custom hashes?
  - Linux first, Windows later, Avoid platform specific code
