// 函数: _Z13GameQueueExit14QueueExitStyleb
// 地址: 0x9b7374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(GetClient() + 0x5044) = 7
*(GetClient() + 0x5064) = 0
void* result = GetClient()
*(result + 0x5060) = arg1

if ((arg2.d & 1) != 0)
    int32_t x20_1 = *(GetClient() + 0x5064) | 2
    result = GetClient()
    *(result + 0x5064) = x20_1

return result
