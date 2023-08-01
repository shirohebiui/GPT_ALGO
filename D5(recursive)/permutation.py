def permutation(nums, current_nums):
    if len(current_nums) == len(nums):
        print(current_nums)
        return
    for num in nums:
        if num not in current_nums:
            permutation(nums, current_nums + [num])

permutation([1,2,3,], [])