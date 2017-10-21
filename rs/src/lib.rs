extern crate byteorder;

use std::io;

use byteorder::{BigEndian, ReadBytesExt};

#[no_mangle]
pub extern fn read_be_int() -> u32 {
    io::stdin().read_u32::<BigEndian>().expect("couldn't read")
}
