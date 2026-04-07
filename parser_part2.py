from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    
    def handle_comment(self, data):
        if '\n' in data:
            print(">>> Multi-line Comment")
        else:
            print(">>> Single-line Comment")
        print(data)
    
    def handle_data(self, data):
        if data.strip():   # ignore empty lines / spaces
            print(">>> Data")
            print(data)

# Input reading
html = ""
for _ in range(int(input())):
    html += input() + "\n"

# Parser object
parser = MyHTMLParser()
parser.feed(html)
