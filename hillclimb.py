import numpy as np
import matplotlib.pyplot as plt

# Objective function
def objective_function(x):
    return np.sin(x**2) + np.cos(x)

# Hill Climbing Algorithm
def hill_climbing(x_start, step_size=0.01, max_x=5):
    x = x_start
    path = [x]

    while True:
        current_value = objective_function(x)

        # Neighbors
        x_left = max(0, x - step_size)
        x_right = min(max_x, x + step_size)

        left_value = objective_function(x_left)
        right_value = objective_function(x_right)

        # Move to better neighbor
        if left_value > current_value:
            x = x_left
        elif right_value > current_value:
            x = x_right
        else:
            break  # Local maximum reached

        path.append(x)
    return x, path


# 
def plot_hill_climbing(x_start):
    x_vals = np.linspace(0, 5, 1000)
    y_vals = objective_function(x_vals)

    final_x, path = hill_climbing(x_start)
    path_y = [objective_function(x) for x in path]

    plt.figure(figsize=(10, 5))
    plt.plot(x_vals, y_vals, label="f(x)")
    plt.plot(path, path_y, marker='o', markersize=3, label="Search Path")
    plt.scatter(x_start, objective_function(x_start), color='green', s=100, label="Start")
    plt.scatter(final_x, objective_function(final_x), color='red', s=100, marker='x', label="Final Peak")

    plt.title(f"Hill Climbing (Start x = {x_start})")
    plt.xlabel("x")
    plt.ylabel("f(x)")
    plt.legend()
    plt.grid()
    plt.show()

# Trial A
plot_hill_climbing(0.5)

# Trial B
plot_hill_climbing(4.0)