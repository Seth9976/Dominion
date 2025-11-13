// 函数: _ZN5Botan2OS25suppress_echo_on_terminalEv
// 地址: 0xe8ebe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct termios termios_p
int64_t lr
termios_p.c_cc[0x1f] = lr.b
termios_p.c_ispeed = lr:4.d
uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
termios_p.c_cc[0x17] = x8.b
termios_p.c_cc[0x18] = x8:1.b
termios_p.c_cc[0x19] = x8:2.b
termios_p.c_cc[0x1a] = x8:3.b
termios_p.c_cc[0x1b] = x8:4.b
termios_p.c_cc[0x1c] = x8:5.b
termios_p.c_cc[0x1d] = x8:6.b
termios_p.c_cc[0x1e] = x8:7.b
struct Botan::OS::Echo_Suppression::Botan::OS::suppress_echo_on_terminal::()::VTable** x0 =
    operator new(0x30)
FILE* fp = *stdin
*x0 = &_vtable_for_Botan::OS::suppress_echo_on_terminal::(){for `Botan::OS::Echo_Suppression'}
int32_t fd = fileno(fp)
x0[1].d = fd
int32_t x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = tcgetattr(fd, x0 + 0xc)

if (x0_1 != 0)
    void* x0_2 = __cxa_allocate_exception(0x28)
    int64_t x0_3
    int128_t v0_1
    x0_3, v0_1 = operator new(0x20)
    v0_1 = data_71c370
    termios_p.c_line = x0_3.b
    termios_p.c_cc[0] = x0_3:1.b
    termios_p.c_cc[1] = x0_3:2.b
    termios_p.c_cc[2] = x0_3:3.b
    termios_p.c_cc[3] = x0_3:4.b
    termios_p.c_cc[4] = x0_3:5.b
    termios_p.c_cc[5] = x0_3:6.b
    termios_p.c_cc[6] = x0_3:7.b
    termios_p.c_iflag = v0_1.d
    termios_p.c_oflag = v0_1:4.d
    termios_p.c_cflag = v0_1:8.d
    termios_p.c_lflag = v0_1:0xc.d
    __builtin_strncpy(x0_3, "Getting terminal status failed", 0x1f)
    *__errno()
    Botan::System_Error::System_Error(x0_2, &termios_p)
    __cxa_throw(x0_2, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
    noreturn

v0 = *(x0 + 0xc)
v1 = *(x0 + 0x1c)
int32_t x9 = *(x0 + 0x2c)
int32_t fd_1 = x0[1].d
termios_p.c_iflag = v0.d
termios_p.c_oflag = v0:4.d
termios_p.c_cflag = v0:8.d
termios_p.c_lflag = v0:0xc.d
termios_p.c_line = v1.b
termios_p.c_cc[0] = v1:1.b
termios_p.c_cc[1] = v1:2.b
termios_p.c_cc[2] = v1:3.b
termios_p.c_cc[3] = v1:4.b
termios_p.c_cc[4] = v1:5.b
termios_p.c_cc[5] = v1:6.b
termios_p.c_cc[6] = v1:7.b
termios_p.c_cc[7] = v1:8.b
termios_p.c_cc[8] = v1:9.b
termios_p.c_cc[9] = v1:0xa.b
termios_p.c_cc[0xa] = v1:0xb.b
termios_p.c_cc[0xb] = v1:0xc.b
termios_p.c_cc[0xc] = v1:0xd.b
termios_p.c_cc[0xd] = v1:0xe.b
termios_p.c_cc[0xe] = v1:0xf.b
uint32_t c_lflag = termios_p.c_lflag
termios_p.c_cc[0xf] = x9.b
termios_p.c_cc[0x10] = x9:1.b
termios_p.c_cc[0x11] = x9:2.b
termios_p.c_cc[0x12] = x9:3.b
termios_p.c_lflag = (c_lflag & 0xfffffff7) | 0x40
int64_t result = tcsetattr(fd_1, 0, &termios_p)

if (result.d != 0)
    void* x0_7 = __cxa_allocate_exception(0x28)
    int64_t x0_8
    int128_t v0_2
    x0_8, v0_2 = operator new(0x30)
    int64_t var_70 = x0_8
    int128_t var_80 = data_71c510
    __builtin_strncpy(x0_8, "Clearing terminal echo bit failed", 0x22)
    *__errno()
    Botan::System_Error::System_Error(x0_7, &var_80)
    __cxa_throw(x0_7, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
    noreturn

struct Botan::OS::Echo_Suppression::Botan::OS::suppress_echo_on_terminal::()::VTable*** entry_x8
*entry_x8 = x0
int64_t x9_1
x9_1.b = termios_p.c_cc[0x17]
x9_1:1.b = termios_p.c_cc[0x18]
x9_1:2.b = termios_p.c_cc[0x19]
x9_1:3.b = termios_p.c_cc[0x1a]
x9_1:4.b = termios_p.c_cc[0x1b]
x9_1:5.b = termios_p.c_cc[0x1c]
x9_1:6.b = termios_p.c_cc[0x1d]
x9_1:7.b = termios_p.c_cc[0x1e]

if (*(x22 + 0x28) == x9_1)
    return result

__stack_chk_fail()
noreturn
