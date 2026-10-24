# Simulation

This section contains problems solved using simulation, circular traversal, and step-by-step implementation of the problem's rules.

## Problems

| Problem | Problem Name | Pattern |
|---------|--------------|---------|
| 1823 | Find the Winner of the Circular Game | Simulation + Circular Traversal |

---

## Simulation + Circular Traversal

- LC 1823 – Find the Winner of the Circular Game

**Learning**
- Simulate the circular game using an index that wraps around with modulo.
- Use a `marked` array to track eliminated players.
- Count only active players while traversing the circle.
- Eliminate a player when the count reaches `k`.
- Reset the counter after each elimination.
- Continue until only one player remains and return the winner's 1-based position.

---

## Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| LC 1823 | O(n × k) | O(n) |

---

## Key Takeaways

- Simulation follows the problem's rules step by step.
- Modulo helps implement circular traversal.
- A tracking array helps distinguish active and eliminated players.
- Choosing the right data structure makes simulation easier to implement and understand.