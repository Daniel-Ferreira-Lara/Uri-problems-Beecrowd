#include <bits/stdc++.h>
using namespace std;

#define MAX 1026
#define add push
#define mp make_pair

int vis[MAX][MAX], N, M;         // visitados
char graph[MAX][MAX];

void BFS( int i, int j ){

 	int x, y;

 	queue< pair<int, int> > q;
 	q.add( mp(i,j) );

 	while( !q.empty() ){

 		x = q.front().first;
 		y = q.front().second;
 		q.pop();

 		if( graph[x][y] == '.' ){

 			if( !vis[x][y] ){

				vis[x][y] = 1;

				q.add( mp(x+1,y) );
				q.add( mp(x-1,y) );
				q.add( mp(x,y+1) );
 				q.add( mp(x,y-1) );
			}
 		}
	}
}

int main(){

	int i, j, cont=0;

	scanf( "%d%d", &M, &N );

	for( i=0; i<=M+1; ++i )
		for( j=0; j<=N+1; ++j )
			graph[i][j] = 'o';

	for( i=1; i<=M; ++i ){

		getchar();

		for( j=1; j<=N; ++j ){
			scanf( "%c", &graph[i][j] );
			vis[i][j]=0; // not visited
		}
	}

	for( i=1; i<=M; ++i ){
		for( j=1; j<=N; ++j ){

			if( !vis[i][j] && graph[i][j]!='o' ){
				BFS( i, j );
				cont++;
			}
		}
	}

	printf( "%d\n", cont );

	return 0;
}