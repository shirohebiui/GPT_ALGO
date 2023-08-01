seq1 = "SICOHWKDFJXO"
seq2 = "WOCIBHXS"

dp = [[0] * (len(seq1) + 1) for _ in range(len(seq2) + 1)]
""" for row in dp:
    print(row)
print(dp) """

for i in range(1, len(seq1) + 1):
    print(seq1[i-1], end=" ")
print(" ")