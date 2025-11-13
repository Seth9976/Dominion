// 函数: _Z13CardnameColor11DomCardEnum
// 地址: 0xc0a4c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_2 = DomDefGet(zx.q(arg1), zx.q(DomCurrentGameVersion()))
int64_t x8 = *(x0_2 + 0xc8)

if ((x8.d & 0x40) != 0)
    return "{log_reaction}"

if ((x8.d & 0x80) != 0)
    return "{log_duration}"

if ((x8.d & 8) != 0)
    return "{log_victory}"

if ((x8.d & 2) != 0)
    return "{log_treasure}"

if ((x8.d & 0x40000) != 0)
    return "{log_night}"

if ((x8.d & 0x200) != 0)
    return "{log_reserve}"

if ((x8.d & 4) != 0)
    return "{log_action}"

if ((x8.d & 0x10) != 0)
    return "{log_curse}"

if ((x8.d & 0x1000000) == 0)
    int32_t x9_1 = *(x0_2 + 0xc0)
    
    if (x9_1 != 0xd30)
        char const* const result = "{log_hex}"
        
        if ((x8.d & 0x2000000) == 0 && x9_1 != 0xd3d)
            if ((x8.d & 0x10000000) != 0)
                return "{log_way}"
            
            if ((x8.d & 0x4000000) != 0)
                return "{log_artifact}"
            
            if ((x8.d & 0x40000000) != 0)
                return "{log_state}"
            
            if ((x8.d & 0x8000000) != 0)
                return "{log_project}"
            
            result = "{log_event}"
            
            if ((x8.d & 0x400) == 0)
                if ((x8.d & 0x20000000) != 0)
                    return "{log_landmark}"
                
                if ((x8 & 0x40) != 0)
                    return "{log_ally}"
                
                if ((x8 & 0x100) != 0)
                    return "{log_trait}"
                
                if ((x8 & 0x800) != 0)
                    return "{log_prophecy}"
                
                if ((x8 & 0x100000) != 0)
                    return "{log_twist}"
                
                if ((x8 & 0x20000000000000) == 0)
                    return "{log_event}"
                
                return "{log_stamp}"
        
        return result

return "{log_boon}"
