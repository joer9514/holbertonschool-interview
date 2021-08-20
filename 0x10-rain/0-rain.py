#!/usr/bin/python3
"""
rain function
"""


def rain(walls):
    """
    Return: Integer indicating total amount of rainwater retained.
    If the list is empty return 0.
    """
    n = len(walls)
    water = 0

    for i in range(1, n - 1):
        # Max element on its left
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])

        # Max element on its right
        right = walls[i]
        for k in range(i + 1, n):
            right = max(right, walls[k])

        water += min(left, right) - walls[i]

    return water
