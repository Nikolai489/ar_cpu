string_list = ['system.cpu.dcache.overallMissRate::total', 'system.cpu.dcache.ReadReq.missRate::total', 
               'system.cpu.dcache.SwapReq.missRate::total', 'system.cpu.dcache.WriteReq.missRate::total',
               'system.cpu.icache.overallMissRate::total', 'system.cpu.icache.ReadReq.missRate::total',
               ]

def run_parser(filename):
    with open(filename, 'r') as input_file, open('gem5_output.txt', 'w') as output_file:
        for line in input_file:
            for string in string_list:
                if string in line:
                    value = line.split()[1]
                    output_file.write('{}: {}\n'.format(string, value))
    input_file.close()
    output_file.close()

run_parser('./logs/Test.txt')