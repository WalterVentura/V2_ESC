

(define arr [0xDE 0xAD 0xBE 0xEF 0xFF 0x00 0xFF 0x00])

(check (and (= (bufget-u32 arr 0) 0xDEADBEEFu32)
            (= (bufget-u32 arr 4) 0xFF00FF00u32)))
