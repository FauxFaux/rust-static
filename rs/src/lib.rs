extern crate byteorder;

use std::io;

use byteorder::{BigEndian, ReadBytesExt};

#[no_mangle]
pub extern fn read_be_int() -> i64 {
    match io::stdin().read_u32::<BigEndian>() {
        Ok(v) => i64::from(v),
        Err(_) => -1,
    }
}
