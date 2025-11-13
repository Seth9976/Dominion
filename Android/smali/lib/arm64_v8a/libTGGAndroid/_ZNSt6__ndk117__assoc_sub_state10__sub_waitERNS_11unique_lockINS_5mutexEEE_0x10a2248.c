// 函数: _ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE
// 地址: 0x10a2248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x70)

if ((x8 & 4) != 0)
    return 

if ((x8 & 8) != 0)
    *(arg1 + 0x70) = x8 & 0xfffffff7
    int64_t* entry_x1
    
    if (zx.d(entry_x1[1].b) == 0)
        std::__ndk1::__throw_system_error(1, "unique_lock::unlock: not locked")
        return std::__ndk1::__assoc_sub_state::wait() __tailcall
    
    *entry_x1
    std::__ndk1::mutex::unlock()
    entry_x1[1].b = 0
    jump(*(*arg1 + 0x18))

do
    std::__ndk1::condition_variable::wait(arg1 + 0x40)
while ((zx.d(*(arg1 + 0x70)) & 4) == 0)
