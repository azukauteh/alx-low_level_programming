#0x14. C - Bit manipulationj


This README provides an overview of bit manipulation in C programming. Bit manipulation involves performing operations on individual bits of data, allowing for efficient handling of flags, bitwise operations, and various bitwise algorithms.

## Bitwise Operators

C provides several bitwise operators that allow manipulation of individual bits within variables.

- **AND (`&`)**: Performs a bitwise AND operation between two operands, resulting in a value where each bit is set if and only if the corresponding bits in both operands are set.

- **OR (`|`)**: Performs a bitwise OR operation between two operands, resulting in a value where each bit is set if at least one of the corresponding bits in the operands is set.

- **XOR (`^`)**: Performs a bitwise XOR (exclusive OR) operation between two operands, resulting in a value where each bit is set if and only if exactly one of the corresponding bits in the operands is set.

- **NOT (`~`)**: Performs a bitwise NOT operation on a single operand, flipping each bit to its opposite value.

- **Left Shift (`<<`)**: Shifts the bits of the left operand to the left by a specified number of positions, filling the rightmost positions with zeros.

- **Right Shift (`>>`)**: Shifts the bits of the left operand to the right by a specified number of positions. For unsigned integers, the rightmost positions are filled with zeros. For signed integers, the sign bit is replicated to fill the leftmost positions.

## Common Bit Manipulation Techniques

### Setting a Bit

To set a specific bit in an integer variable, you can use the OR operator (`|`) along with a mask that has only the target bit set.

```c
int setBit(int num, int position) {
    int mask = 1 << position;
    return num | mask;
}
```

In this example, `setBit` function sets the bit at the specified position in the `num` by ORing it with a mask that has only the target bit set.

### Clearing a Bit

To clear a specific bit in an integer variable, you can use the AND operator (`&`) along with a mask that has the target bit inverted.

```c
int clearBit(int num, int position) {
    int mask = ~(1 << position);
    return num & mask;
}
```

In this example, `clearBit` function clears the bit at the specified position in `num` by ANDing it with a mask that has the target bit inverted.

### Toggling a Bit

To toggle a specific bit in an integer variable, you can use the XOR operator (`^`) along with a mask that has only the target bit set.

```c
int toggleBit(int num, int position) {
    int mask = 1 << position;
    return num ^ mask;
}
```

In this example, `toggleBit` function toggles the bit at the specified position in `num` by XORing it with a mask that has only the target bit set.

### Checking if a Bit is Set

To check if a specific bit is set in an integer variable, you can use the AND operator (`&`) along with a mask that has only the target bit set.

```c
int isBitSet(int num, int position) {
    int mask = 1 << position;
    return (num & mask) != 0;
}
```

In this example, `isBitSet` function checks if the bit at the specified position in `num` is set by ANDing it with a mask that has only the target bit set. The result is compared to zero to return a boolean value.

## Bitwise Operations and Flags

Bit manipulation is commonly used to work
