// 函数: _ZN23AndroidNetworkInterface15TCPListenAcceptEjR14NetworkAddress
// 地址: 0x107a59c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
int128_t v0
v0.q = 0
v0:8.q = 0
struct fd_set readfds
__builtin_memset(&readfds, 0, 0x80)
__FD_SET_chk(zx.q(x19), &readfds, 0x80, v0)
struct timeval timeout
__builtin_memset(&timeout, 0, 0x10)

if (select(x19, &readfds, nullptr, nullptr, &timeout) s< 1)
    __FD_ISSET_chk(zx.q(x19), &readfds, 0x80)
    return 0

socklen_t len = 0x10
__FD_ISSET_chk(zx.q(x19), &readfds, 0x80)
int64_t entry_x2
return accept(x19, entry_x2 + 4, &len)
