# In-depth-bitwise

## About

Bitwise operators are the fundamental operators in computer programming that are useful for manipulating individual bits in binary representation. These operators are commonly used in low-level programming, embedded systems, and various other applications where precise control over the binary representation of data is necessary.

Here are the uses of each bitwise operator:-

- AND (&) Operator:
  
  Performs AND operation on each pair of bits. It returns '1' if both bits are '1' or else returns '0' for the remaining condition.

  For e.g (A & B)

- OR (|) Operator:

  Performs OR operation on each pair of bits. It returns '1' if one or both of them are '1' else returns '0'.

  For e.g (A | B)

- XOR (^) Operator:

  Performs a bitwise XOR (exclusive OR) operation on each pair of corresponding bits in the operands. It returns 1 if the bits are different; otherwise, it returns 0. XOR is useful for toggling or flipping specific bits.

  For e.g (A ^ B)

- Left Shift (<<) Operator:

    Shifts the bits of the left operand (a) to the left by n positions, padding with zeros on the right. This operation is equivalent to multiplying a by 2^n.

    For e.g (A << B)

- Right Shift (>>) Operator:

  Shifts the bits of the left operand (a) to the right by n positions. The behavior depends on the type of shift (logical or arithmetic) and the sign of the original number. In the logical right shift, zeros are padded on the left, while in the arithmetic right shift, the sign bit is preserved (it's filled with the original sign bit).

  For e.g ( A >> B)

- NOT ( ~ )Operator:

  Performs complement operation on each of the bit of the operand. It inverts '1s' to '0s' and '0s'to '1s'.

  For e.g ( ~A)


