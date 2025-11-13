// 函数: _ZN23AndroidNetworkInterface14TCPIsConnectedEj
// 地址: 0x107a378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
struct fd_set writefds
__builtin_memset(&writefds, 0, 0x80)
int32_t entry_fd
__FD_SET_chk(zx.q(entry_fd), &writefds, 0x80, v0)
int128_t v0_1
v0_1.q = 0
v0_1:8.q = 0
struct fd_set exceptfds
__builtin_memset(&exceptfds, 0, 0x80)
__FD_SET_chk(zx.q(entry_fd), &exceptfds, 0x80, v0_1)
struct timeval timeout
__builtin_memset(&timeout, 0, 0x10)

if (select(entry_fd + 1, nullptr, &writefds, &exceptfds, &timeout) == 0xffffffff)
    if (*__errno() == 0x73)
        return 2
    
    close(entry_fd)
    return 5

if (__FD_ISSET_chk(zx.q(entry_fd), &writefds, 0x80) != 0)
    return 4

if (__FD_ISSET_chk(zx.q(entry_fd), &exceptfds, 0x80) == 0)
    return 2

return 5
