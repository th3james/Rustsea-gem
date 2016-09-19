use std::ffi::CString;

struct Cell {
    value: String
}

#[no_mangle]
pub extern "C" fn get_cell_value() -> *mut i8 {
    let cell = Cell {value: "Hello World".to_string()};

    CString::new(cell.value).unwrap().into_raw()
}

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
    }
}
