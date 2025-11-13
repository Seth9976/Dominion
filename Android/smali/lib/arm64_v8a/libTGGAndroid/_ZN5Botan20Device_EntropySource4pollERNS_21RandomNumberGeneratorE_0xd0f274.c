// 函数: _ZN5Botan20Device_EntropySource4pollERNS_21RandomNumberGeneratorE
// 地址: 0xd0f274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x22 = *(arg1 + 8)
int64_t x19 = *(arg1 + 0x10)

if (x19 == x22)
    return 0

struct fd_set readfds
__builtin_memset(&readfds, 0, 0x80)

do
    uint64_t x0 = zx.q(*x22)
    x22 = &x22[1]
    __FD_SET_chk(x0, &readfds, 0x80)
while (x19 != x22)

void* buf
int128_t v1_1
buf, v1_1 = Botan::allocate_memory(0x40, 1)
v1_1 = data_71a7a0
__builtin_memset(buf, 0, 0x40)
struct timeval timeout
timeout.tv_sec = v1_1.q
timeout.tv_usec = v1_1:8.q
int32_t x0_2 = select(*(arg1 + 0x20) + 1, &readfds, nullptr, nullptr, &timeout)
int32_t* x23_1
int64_t x24_1

if (x0_2 s> 0)
    x23_1 = *(arg1 + 8)
    x24_1 = *(arg1 + 0x10)

int64_t result

if (x0_2 s<= 0 || x23_1 == x24_1)
    result = 0
    Botan::deallocate_memory(buf, 0x40, 1)
else
    result = 0
    
    do
        int32_t fd = *x23_1
        
        if (__FD_ISSET_chk(zx.q(fd), &readfds, 0x80) != 0)
            ssize_t x0_6 = read(fd, buf, 0x40)
            
            if (x0_6 s>= 1)
                int64_t* entry_x1
                (*(*entry_x1 + 0x20))(entry_x1, buf, x0_6)
                result += x0_6 << 3
        
        x23_1 = &x23_1[1]
    while (x24_1 != x23_1)
    
    if (buf != 0)
        Botan::deallocate_memory(buf, 0x40, 1)

return result
