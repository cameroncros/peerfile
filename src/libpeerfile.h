
/**
 * Client options
 */
//Peers
void addPeer();
void deletePeer();
void deleteAllPeers();

//Hash
void setHashFunction();
void md5hash();
void sha1hash();

//get the file
void getFileFromPeers();

/**
 * Server Options
 */
void setFindFileFunction();
void findfile_local();
void listenForConnections();
