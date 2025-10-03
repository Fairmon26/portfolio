# Real Estate Lead Tracker (Basic Example)
# Author: Jahnya Fairmon

# Sample property leads (in real life, this could come from PropStream, CSV, or an API)
leads = [
    {"address": "123 Main St", "city": "Paterson", "price": 220000, "status": "foreclosure"},
    {"address": "45 Grove Ave", "city": "Newark", "price": 310000, "status": "auction"},
    {"address": "78 Elm St", "city": "Jersey City", "price": 185000, "status": "pre-foreclosure"},
]

# Filter function: find affordable leads under a price cap
def filter_leads(price_cap):
    return [lead for lead in leads if lead["price"] <= price_cap]

# Example usage
if __name__ == "__main__":
    cap = 250000
    results = filter_leads(cap)
    print(f"Leads under ${cap}:")
    for r in results:
        print(f"- {r['address']}, {r['city']} (${r['price']}) [{r['status']}]")
