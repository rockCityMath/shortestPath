#include "shortestdistance.h"

//Find and return the shortest path
int shortestPath(std::vector<int> edges[], int start, int end, int numEdges){

    //Keep track of visited nodes
    std::vector<bool> visited(numEdges, 0);

    //Initalize a distance of 0
    std::vector<int> distance(numEdges, 0);

    //Initialize a queue for the search
    std::queue <int> Q;
    distance[start] = 0;

    //Start the search at the origin node and mark it as visited
    Q.push(start);
    visited[start] = true;

    //While there are still items in the queue
    //Queue will have items until the distance is found
    while( !Q.empty() ) { 

        //Get the value of the front node, and remove from queue
        int x = Q.front();
        Q.pop();

        //For all edges in the vector
        for(int i = 0; i < edges[x].size(); i++) {

            //If the edge is visited, continue
            if(visited[edges[x][i]] )  
                continue;

            //Add one to the distance, since each loop outward is a distance outward
            distance[edges[x][i]] = distance[x] + 1; 
            Q.push(edges[x][i]);
            visited[edges[x][i]] = 1;

        }

    }

    return distance[end];

}

//Add a connection between the first node and the end node, and vise verse, because it's unidirectional
void addEdge(std::vector<int> edges[], int start, int end) {

    edges[start].push_back(end);
    edges[end].push_back(start);

}
