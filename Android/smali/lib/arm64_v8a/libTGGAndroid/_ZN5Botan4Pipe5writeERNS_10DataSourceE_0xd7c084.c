// 函数: _ZN5Botan4Pipe5writeERNS_10DataSourceE
// 地址: 0xd7c084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = Botan::allocate_memory(0x400, 1)
memset(x0, 0, 0x400)
int64_t result

while (true)
    int64_t* entry_x1
    result = (*(*entry_x1 + 0x18))(entry_x1)
    
    if ((result.d & 1) != 0)
        break
    
    (**entry_x1)(entry_x1, x0, 0x400)
    Botan::Pipe::write(arg1, x0)

if (x0 == 0)
    return result

return Botan::deallocate_memory(x0, 0x400, 1)
