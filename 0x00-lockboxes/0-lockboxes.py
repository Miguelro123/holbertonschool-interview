#!/usr/bin/python3
def canUnlockAll(boxes):

    Boxe = [0]

    for key in Boxe:
        for new_key in boxes[key]:
            if new_key <= len(boxes) - 1 and new_key not in Boxe:
                Boxe.append(new_key)

    if len(Boxe) == len(boxes):
        return True
    else:
        return False
