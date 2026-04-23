# file name: detect_html_tags.py

import re

n = int(input())
text = ""

for _ in range(n):
    text += input() + "\n"

# remove HTML comments
text = re.sub(r'<!--.*?-->', '', text, flags=re.DOTALL)

# find tags
for tag_match in re.finditer(r'<\s*([a-zA-Z0-9]+)([^>]*)>', text):
    tag_name = tag_match.group(1)
    print(tag_name)
    
    attr_string = tag_match.group(2)
    
    # find attributes
    for attr_match in re.finditer(
        r'([a-zA-Z0-9\-]+)\s*=\s*(?:"([^"]*)"|\'([^\']*)\'|([^\s>]+))',
        attr_string
    ):
        attr_name = attr_match.group(1)
        attr_value = next(v for v in attr_match.groups()[1:] if v is not None)
        
        print("-> {} > {}".format(attr_name, attr_value))
