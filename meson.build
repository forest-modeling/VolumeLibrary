fs = import('fs')

src_list = fs.read('source_list.txt').strip().split('\n')

nvel_static_lib = static_library(
  'vollib',
  src_list,
  # include_directories : fvs_include_dirs,
  #fortran_args : fortran_ignore_warnings + ['-fallow-invalid-boz',],
  fortran_args : fortran_ignore_warnings,
  install : false,
  )