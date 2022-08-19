project('arrow-cpp', 'cpp',
  license : 'Apache-2.0',
  version : '1.0.0',
  default_options : [
    'warning_level=3',
    'c_std=c++17',
  ]
)

deps = [
  dependency('arrow'),
]

exe = executable(
  'poc-arrow-cpp',
  'src/main.cpp',
  'src/utils.cpp',
  'src/examples-simple.cpp',
  'src/examples-scalars.cpp',
  dependencies : deps,
  install : true)

test('test-poc-arrow-cpp', exe)
