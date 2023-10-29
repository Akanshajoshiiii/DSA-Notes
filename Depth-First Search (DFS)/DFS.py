def recursive_dfs(graph, node, visited, visited_nodes):
    if node not in visited:
        visited.add(node)
        visited_nodes.append(node)  # Collect visited nodes
        for neighbor in graph[node]:
            if neighbor not in visited:
                recursive_dfs(graph, neighbor, visited, visited_nodes)

def iterative_dfs(graph, start):
    visited = set()
    stack = [start]
    visited_nodes = []

    while stack:
        node = stack.pop()
        if node not in visited:
            visited.add(node)
            visited_nodes.append(node)  # Collect visited nodes
            stack.extend(neighbor for neighbor in graph[node] if neighbor not in visited)

    print("Visited nodes:", ", ".join(visited_nodes))


# Define the graph as an adjacency list
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E', 'F'],
    'C': ['G'],
    'D': ['H'],
    'E': ['I'],
    'F': ['J'],
    'G': ['K', 'L'],
    'H': [],
    'I': [],
    'J': [],
    'K': [],
    'L': []
}

# Initialize a set to keep track of visited nodes
visited_nodes = set()

# Start the DFS from node 'A'
start_node = 'A'

visited_nodes_accumulated = []
recursive_dfs(graph, start_node, visited_nodes, visited_nodes_accumulated)
print("Visited nodes:", ", ".join(visited_nodes_accumulated))

iterative_dfs(graph, start_node)
