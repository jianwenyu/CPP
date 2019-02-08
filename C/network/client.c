#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	
	/* 1. Setup variables */
	int sockfd;
	int len;
	struct sockaddr_un address;
	int result;
	char ch = 'A';
	
	/* 2. Create a socket for the client */
	sockfd = socket(AF_UNIX, SOCK_STREAM, 0); //Reliable connection 
	
	/* 3. Name the socket as aggreed with the server */
	address.sun_family = AF_UNIX;
	strcpy(address.sun_path, "server_socket");
	len = sizeof(address);
	
	/* 4. Connect the socket to the server's socket */
	result = connect(sockfd, (struct sockaddr*)&address, len);
	if(result == -1){
		perror("oops: client1");
		exit(1);
	}
	
	/* 5. Read and Write via sockfd*/
	write(sockfd, &ch, 1);
	read(sockfd, &ch, 1);
	printf("char from server = %c \n", ch);
	close(sockfd);
	
	return 0;
}
