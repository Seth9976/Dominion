// 函数: _ZNSt6__ndk117__assoc_sub_state4waitEv
// 地址: 0x10a22e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* entry_x0
void* var_48 = &entry_x0[3]
char var_40 = 1
int64_t result = std::__ndk1::mutex::lock()
int32_t x8_1 = entry_x0[0xe].d

if ((x8_1 & 4) == 0)
    if ((x8_1 & 8) != 0)
        entry_x0[0xe].d = x8_1 & 0xfffffff7
        std::__ndk1::mutex::unlock()
        var_40 = 0
        result = (*(*entry_x0 + 0x18))(entry_x0)
    else
        do
            result = std::__ndk1::condition_variable::wait(&entry_x0[8])
        while ((zx.d(entry_x0[0xe].b) & 4) == 0)

if (zx.d(var_40) != 0)
    result = std::__ndk1::mutex::unlock()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
