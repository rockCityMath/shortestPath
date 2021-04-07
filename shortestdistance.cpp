#include "shortestdistance.h"

int main() {

    //Initialize the vector that holds the list of connections between nodes (fixed size) and add the edges of the graph
    std::vector<int> edges[8];
    
    addEdge(edges, 0, 1);
    addEdge(edges, 1, 2);
    addEdge(edges, 0, 2);
    addEdge(edges, 0, 4);
    addEdge(edges, 2, 5);
    addEdge(edges, 3, 4);
    addEdge(edges, 4, 5);
    addEdge(edges, 4, 6);
    addEdge(edges, 0, 7);

    //Get the start and end node from the user
    int start;
    int end;
    std::cout << "Start node: ";
    std::cin >> start;
    std::cout << "End node: ";
    std::cin >> end;

    std::cout << "Shortest distance between " << start << " and " << end << " ";
    std::cout << shortestPath(edges, start, end, 9) << std::endl;

    std::cout << "Done?" << std::endl;
    std::cin >> start;

    return 0;



}