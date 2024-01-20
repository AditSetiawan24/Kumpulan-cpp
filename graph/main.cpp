#include <iostream>
#include <cstdlib>
#define N_VERTEX 5
using namespace std;

struct node_graph {
    int vertex;
    node_graph* next;
};

void addEdge(node_graph *graph[], int vertex_source, int vertex_target) {
    node_graph* temp = new node_graph;
    temp->vertex = vertex_target;
    temp->next = NULL;

    if (graph[vertex_source] == NULL) {
        graph[vertex_source] = temp;
    } else {
        temp->next = graph[vertex_source];
        graph[vertex_source] = temp;
    }
}
void printGraph(node_graph *graph[]) {
    cout << "START" << endl;

    for(int i = 0; i < N_VERTEX; i++) {
        cout << "Graph Vertex " << i << ": ";
        node_graph *head = graph[i];

        while(head != NULL) {
            cout << head->vertex << " -> ";
            head = head->next;
        }

        cout << "NULL" << endl;
    }

    cout << "END" << endl;
}

void deleteEdge(node_graph *graph[], int vertex_source, int vertex_target) {
    node_graph *head = graph[vertex_source];
    node_graph *prev = NULL;

    while(head != NULL) {
        if (head->vertex == vertex_target) {
            if (prev == NULL) {
                graph[vertex_source] = head->next;
            } else {
                prev->next = head->next;
            }

            delete head;
            break;
        } else {
            prev = head;
            head = head->next;
        }
    }
}

int main() {
    node_graph* graph[N_VERTEX] = {NULL, NULL, NULL, NULL, NULL};

    addEdge(graph, 1, 3);
    addEdge(graph, 0, 1);
    addEdge(graph, 1, 5);
    addEdge(graph, 2, 5);
    addEdge(graph, 1, 4);

    printGraph(graph);

    deleteEdge(graph, 1, 5);

    printGraph(graph);

return 0;
}
