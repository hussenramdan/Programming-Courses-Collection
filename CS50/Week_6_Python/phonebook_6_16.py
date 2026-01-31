
# user = {
#     "name":"Hussein",
#     "age": 20,
#     "country":"Egypt"
# }
# print( user["age"]  )



# test = {
    
#     "Ramdan":"01124437397",
#     "Hussein":"01116930028",
#     "mather":"01061986896",
# }
# print(test["Hussein"])



form cs50 import get_string
pepole = {
    "david":"012345",
    "abdelrahman":"01654",
}

# get a name
name = get_string("name: ")
if name in pepole:
    print(f"Number: {  pepole[name]    }")